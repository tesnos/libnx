/**
 * @file switch.h
 * @brief Central Switch header. Includes all others.
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <switch/types.h>
#include <switch/result.h>
#include <switch/svc.h>
#include <switch/ipc.h>
#include <switch/os.h>

#include <switch/kernel/tmem.h>
#include <switch/kernel/shmem.h>
#include <switch/kernel/mutex.h>
#include <switch/kernel/thread.h>
#include <switch/kernel/virtmem.h>

#include <switch/services/sm.h>
#include <switch/services/fs.h>
#include <switch/services/applet.h>
#include <switch/services/binder.h>
#include <switch/services/bsd.h>
#include <switch/services/fatal.h>
#include <switch/services/usb.h>
#include <switch/services/hid.h>
#include <switch/services/vi.h>

#include <switch/devices/usb_dev.h>

#include <switch/gfx/gfx.h>

#ifdef __cplusplus
}
#endif

