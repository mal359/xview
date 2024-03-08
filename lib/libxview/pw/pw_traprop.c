#ifndef lint
#ifdef sccs
static char     sccsid[] = "@(#)pw_traprop.c 20.18 93/06/28 Copyr 1985 Sun Micro";
#endif
#endif
/*
 *	(c) Copyright 1989 Sun Microsystems, Inc. Sun design patents 
 *	pending in the U.S. and foreign countries. See LEGAL_NOTICE 
 *	file for terms of the license.
 */

/*
 * pw_traprop.c traprop scan routine for pixwins built on top of pr_traprop
 * see pr_traprop.c for algorithmic details
 */

#include <xview_private/pw_traprop_.h>
#include <xview_private/gettext_.h>
#include <xview_private/i18n_impl.h>
#include <pixrect/traprop.h>

Xv_public int
pw_traprop(pw, dx, dy, trap, op, spr, sx, sy)
    register Xv_opaque pw;
    register int    dx, dy;
    struct pr_trap  trap;
    int             op;
    struct pixrect *spr;
    int             sx, sy;
{
    xv_error((Xv_object)NULL,
	     ERROR_STRING, 
	         XV_MSG("pw_traprop: not implemented"),
	     NULL);
}
