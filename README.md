# TDiss is a disassembler for x86 / x86-64 (AMD64)

Initially built to power runtime hooking and analysis (checking for hooks) 

## Features

- Support for most extensions (MMX,SSE1,SSE2,SSE3,SSE4.1,SSE4.1,3DNOW)
- Zero allocations
- Thread safe (no internal state)
- Fast (around ~50MB/s)
- No dependancies other than stdlib (could be removed)
- Can be built as 32bit or 64bit (both support decoding 32bit or 64bit instructions)
- Can handle / skip invalid bytes
- Large set of tests

## Projects

The disassembler is contained within the [TDiss](TDiss) folder, everything else is either a meta tool, tests or benchmarks.

## Example

```cpp
// Destination for decoded instructions
Instruction instructions[0x8];
size_t instructionCount;

// Bytes from a file or read from a running process via ReadProcessMemory, ...
const uint8_t byteCode[0x9 + 0x8] = {
		0x67, 0x0F, 0xAE, 0x3C, 0x45, 0x56, 0x04, 0x00, 0x00,  // CLFLUSH [eax*2+ 0x456]
		0x0F, 0xAE, 0x3C, 0x45, 0x56, 0x04, 0x00, 0x00	       // CLFLUSH [rax*2+ 0x456]
};

// Create a view over the bytes
CodeStream strm(0, byteCode, sizeof(byteCode), DisOptions::STOP_ON_FLOW, CodeType::CODE_64BIT);

// disassemble
DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

const Instruction& inst0 = instructions[0x0];
// inst0.opcode == InstructionID::CLFLUSH;
// inst0.size == 0x9;
// inst0.displacement == 0x456;
// ...
```

## Building

The libary can be built as a static or shared lib.

See [building.md](building.md) for details.
