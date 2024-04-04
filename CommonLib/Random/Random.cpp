#include "Common.h"
#include "Random.h"

#ifdef X_WIN32
#include <wincrypt.h>
#else // X_WIN32
#include <unistd.h>
#include <sys/syscall.h>
#include <linux/random.h>
#endif // X_WIN32


namespace util
{
    std::vector<uint8_t> GenRandBytes(size_t size)
    {
        std::vector<uint8_t> randomBytes(size);
        if (size == 0) {
            return randomBytes;
        }

#ifdef X_WIN32
        // Windows
        HCRYPTPROV hProvider;
        if (!CryptAcquireContext(&hProvider, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT)) {
            throw std::runtime_error("Failed to acquire cryptographic context");
        }

        if (!CryptGenRandom(hProvider, static_cast<DWORD>(size), &randomBytes[0])) {
            CryptReleaseContext(hProvider, 0);
            throw std::runtime_error("Failed to generate random bytes");
        }

        CryptReleaseContext(hProvider, 0);
#else // X_WIN32
        // Linux
        ssize_t bytesRead = syscall(SYS_getrandom, &randomBytes[0], size, 0);
        if (bytesRead == -1) {
            throw std::runtime_error("Failed to generate random bytes");
        }
#endif // X_WIN32

        return randomBytes;
    }

} // namespace util