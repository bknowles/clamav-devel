/*
 *  Load, and verify ClamAV bytecode.
 *
 *  Copyright (C) 2009 Sourcefire, Inc.
 *
 *  Authors: Török Edvin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#include "bytecode.h"

int cli_bytecode_prepare_jit(struct cli_bc *bc)
{
    if (bc->state != bc_loaded) {
	cli_warnmsg("Cannot prepare for JIT, because it has already been converted to interpreter");
	return CL_EBYTECODE;
    }
    cli_warnmsg("JIT not yet implemented\n");
    return CL_EBYTECODE;
}

int cli_vm_execute_jit(const struct cli_bc *bc, struct cli_bc_ctx *ctx, const struct cli_bc_func *func, const struct cli_bc_inst *inst)
{
    return CL_EBYTECODE;
}

int cli_bytecode_init_jit(struct cli_all_bc *allbc)
{
    return CL_SUCCESS;
}

int cli_bytecode_done_jit(struct cli_all_bc *allbc)
{
    return CL_SUCCESS;
}

void cli_bytecode_debug(int argc, char **argv) {
  // Empty
}