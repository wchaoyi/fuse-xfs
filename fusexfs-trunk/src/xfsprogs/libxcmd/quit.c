/*
 * Copyright (c) 2003-2005 Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <xfs/xfs.h>
#include <xfs/command.h>

static cmdinfo_t quit_cmd;

/* ARGSUSED */
static int
quit_f(
	int	argc,
	char	**argv)
{
	return 1;
}

void
quit_init(void)
{
	quit_cmd.name = _("quit");
	quit_cmd.altname = _("q");
	quit_cmd.cfunc = quit_f;
	quit_cmd.argmin = -1;
	quit_cmd.argmax = -1;
	quit_cmd.flags = CMD_FLAG_GLOBAL;
	quit_cmd.oneline = _("exit the program");

	add_command(&quit_cmd);
}
