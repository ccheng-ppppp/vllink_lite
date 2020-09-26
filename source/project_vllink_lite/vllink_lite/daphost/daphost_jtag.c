#include "vsf.h"
#include "../dap/dap.h"
#include "daphost_priv.h"

static vsf_err_t jtag_read_dp(uint8_t adr, uint32_t *val)
{
}

static vsf_err_t jtag_write_dp(uint8_t adr, uint32_t val)
{
}

static vsf_err_t jtag_read_ap(uint32_t adr, uint32_t *val)
{
}

static vsf_err_t jtag_write_ap(uint32_t adr, uint32_t val)
{
}

static vsf_err_t jtag_read_memory(uint32_t addr, uint32_t size, uint8_t *buf)
{
}

static vsf_err_t jtag_write_memory(uint32_t addr, uint32_t size, uint8_t *buf)
{
}

static vsf_err_t jtag_flash_syscall_exec(const program_syscall_t *sysCallParam,
        uint32_t entry, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4,
        flash_algo_return_t return_type)
{
}

static vsf_err_t jtag_set_target_state_hw(target_state_t state)
{
}

static vsf_err_t jtag_set_target_state_sw(target_state_t state)
{
}

static void jtag_set_reset_connect(SWD_CONNECT_TYPE type)
{
}

static void jtag_set_soft_reset(uint32_t soft_reset_type)
{
}