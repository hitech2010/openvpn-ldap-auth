/**
 * vim: tabstop=2:shiftwidth=2:softtabstop=2:expandtab
 * defines.h
 * Copyright (C) 2009 Emmanuel Bretelle <chantra@debuntu.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef _DEFINES_H_
#define _DEFINES_H_

#define URI						"ldap://localhost"
#define TLSEnable			0

#define BASEDN				"ou=users,dc=example,dc=com"
//#define SEARCH_FILTER	"(uid=chantra)"
#define SEARCH_FILTER NULL

#endif
 