#pragma once

#include <set>
#include <iostream>

struct video_settings_t
{
    const static int MODE_WINDOW = 0;
    const static int FULLSCREEN = 1;

    int mode;
    int scale;
    int stretch;
    int fps;
};

struct engine_settings_t
{
    const static int GEAR_PRESS = 1; // For cabinets
    const static int GEAR_AUTO  = 2;

    int dip_time;
    int dip_traffic;
    int dip_advertise;
    int gear;
    bool freeze_timer;
    bool disable_traffic;
};

class Config
{
public:
    video_settings_t video;
    engine_settings_t engine;

    // 30 or 60 fps
    int fps;

    // Original game ticks sprites at 30fps but background scroll at 60fps
    int tick_fps;

    Config(void);
    ~Config(void);

    void init();
    void load(const std::string &filename);
    void save(const std::string &filename);

private:
};

extern Config config;