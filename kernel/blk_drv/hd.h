
#include <linux/config.h>
#include <linux/sched.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/hdreg.h>
#include <asm/system.h>
#include <asm/io.h>
#include <asm/segment.h>

typedef  void (*do_hd_type)(void);
extern do_hd_type do_hd;
extern do_hd_type do_floppy;
