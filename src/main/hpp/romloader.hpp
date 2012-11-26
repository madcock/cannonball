#pragma once

class RomLoader
{

public:
    enum {NORMAL = 1, INTERLEAVE2 = 2, INTERLEAVE4 = 4};

    uint8_t* rom;

    // Size of rom
    uint32_t length;

    RomLoader();
    ~RomLoader();
    void init(uint32_t);
    int load(const char* filename, const int offset, const int length, const uint8_t mode = NORMAL);
    void unload(void);
    uint32_t read32(uint32_t*);
    uint16_t read16(uint32_t*);
    uint8_t read8(uint32_t*);

    uint32_t read32(uint32_t);
    uint16_t read16(uint32_t);
    uint8_t read8(uint32_t);

    uint16_t read16(uint16_t*);
    uint8_t read8(uint16_t*);
    uint16_t read16(uint16_t);
    uint8_t read8(uint16_t);

private:    
    void error(const char* p, const char* p2 = "");

};