#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>

struct JpegData {
    char *buf;
    ssize_t buf_size;
    ssize_t jpeg_size;
};

int32_t InitJPEG();
int32_t DestroyJPEG();
int32_t get_jpeg(
    uint32_t width, uint32_t height, uint32_t qfactor, uint8_t color2Grey,
    struct JpegData *jpeg_buf);
