#pragma once

#include "Instruction.h"
#include "mnemonics.h"
#include "TDissOptions.h"

namespace TDiss
{
    // Instruction is a decoded instruction
    // InstructionID is the name of the instruction.
    // You can check the values of the InstructionID enum to see what instructions are supported.
    struct Instruction
    {
        Instruction()
        {
            add = 0;
            displacement = 0;

            size = 0;
            displacementSize = 0;

            segment = RegIndex::NONE;
            base = RegIndex::NONE;
            scale = 0;

            opcode = static_cast<InstructionID::Enum>(0x0);
            instSet = InstructionSet::NONE;
            flow = FlowControl::NONE;

            modifiedFlags = 0;
            testedFlags = 0;
            undefinedFlags = 0;
        }

        uint64_t add; // virtual address of inst.
        uint64_t displacement;

        ImmVal imm; // set when a operand is of type IMM

        // http://www.intel.com/content/dam/www/public/us/en/documents/manuals/64-ia-32-architectures-software-developer-manual-325462.pdf#page=85
        RegIndex::Enum segment; // 8bit
        RegIndex::Enum base;    // 8bit
        uint8_t scale;          // scale: 2/4/8 (used when a operand type is MEM)

        uint8_t size; // size of complete instruction (bytes)
        uint8_t displacementSize;

        InstructionID::Enum opcode;
        InstructionSet::Enum instSet;
        FlowControl::Enum flow;

        // need to store things like: segment, affected flags
        Operand ops[MAX_OPERANDS];

        // CpuFlag::
        uint16_t modifiedFlags;
        uint16_t testedFlags;
        uint16_t undefinedFlags;
    };

    // CodeStream is the input type to the disassembler
    // We do not make a copy of the data so pCode outlive the CodeStream.
    class CodeStream
    {
    public:
        CodeStream(uint64_t codeVirtaulAdd, const uint8_t* pCode,
            intptr_t codeLen, uint32_t options, CodeType::Enum codeType);

        CodeStream(CodeStream&) = default;
        CodeStream& operator=(CodeStream&) = default;

    public:
        X_INLINE bool IsAddMask32(void) const;
        X_INLINE bool is32itDecode(void) const;
        X_INLINE bool is64BitDecode(void) const;
        X_INLINE bool stopOnFlowEnabled(void) const;
        X_INLINE CodeType::Enum codeType(void) const;
        X_INLINE uint32_t options(void) const;
        X_INLINE void setOptions(uint32_t op);

        X_INLINE const uint8_t* current(void) const;
        X_INLINE const uint8_t* begin(void) const;
        X_INLINE const uint8_t* end(void) const;

        X_INLINE intptr_t length(void) const;
        X_INLINE intptr_t bytesLeft(void) const;

        X_INLINE uint64_t baseVA(void) const;
        X_INLINE uint64_t currentVA(void) const;
        X_INLINE uint64_t currentVAOffset(void) const;

        X_INLINE void setMarker(void);
        X_INLINE void setToMarker(void);

    public:
        bool ReadDisplacementValue(uint64_t& out, size_t size);

        template<typename T>
        bool ReadValue(T& out);

        void SeekBytes(size_t num);
        void SignedSeek(intptr_t num);
        template<typename Type>
        void Seek(size_t num);
        template<typename Type>
        const Type getSeek(void);
        template<typename Type>
        const Type* getSeekPtr(void);
        template<typename Type>
        const Type get(void) const;
        template<typename Type>
        const Type* getPtr(void) const;

        bool isEof(void) const;

    private:
        uint64_t codeVirtualAdd_;
        const uint8_t* pCur_;
        const uint8_t* pBegin_;
        const uint8_t* pEnd_;
        const uint8_t* pMarker_;
        uint32_t options_;
        CodeType::Enum codeType_;
    };

    struct DisResult
    {
        enum Enum
        {
            OK,
            INVALID_PARAM,
            OUTDATAFULL,
            DATAERR,
        };
    };

} // namespace TDiss

#include "TDissTypes.inl"