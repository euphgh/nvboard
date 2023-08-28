#ifndef __NVBOARD_H__
#define __NVBOARD_H__

#include <component.h>
#include <constrs.h>
#include <keyboard.h>
#include <nvboard/configs.h>
#include <render.h>
#include <vga.h>

#define BIND_RATE_RT  true
#define BIND_RATE_SCR false
#define BIND_DIR_OUT  true
#define BIND_DIR_IN   false

void nvboard_init(int vga_clk_cycle = 1);
void nvboard_quit();
void nvboard_bind_pin(void *signal, bool is_rt, bool is_output, int len, ...);
void nvboard_update();

#endif
