#pragma once
#include "config.h"

struct AppConfig {
    // [system]
    char sensor_config[128];

    bool rtsp_enable;

    // [video_0]
    bool mp4_enable;
    uint32_t mp4_fps;
    uint32_t mp4_width;
    uint32_t mp4_height;
    uint32_t mp4_bitrate;

    // [jpeg]
    bool jpeg_enable;
    uint32_t jpeg_fps;
    uint32_t jpeg_width;
    uint32_t jpeg_height;
    uint32_t jpeg_bitrate;

    // [mjpeg]
    bool mjpeg_enable;
    uint32_t mjpeg_fps;
    uint32_t mjpeg_width;
    uint32_t mjpeg_height;
    uint32_t mjpeg_bitrate;

    // [http_post_jpeg]
    bool http_post_enable;
    char http_post_host[128];
    char http_post_url[128];
    char http_post_login[128];
    char http_post_password[128];
    uint32_t http_post_width;
    uint32_t http_post_height;
    uint32_t http_post_interval;

    uint32_t http_post_chn;

    bool osd_enable;
    bool motion_detect_enable;

    uint32_t web_port;
    bool web_enable_static;

    uint32_t isp_thread_stack_size;
    uint32_t venc_stream_thread_stack_size;
    uint32_t web_server_thread_stack_size;


    uint32_t align_width;
    uint32_t max_pool_cnt;
    uint32_t blk_cnt;
};

extern struct AppConfig app_config;

enum ConfigError parse_app_config(const char *path);
