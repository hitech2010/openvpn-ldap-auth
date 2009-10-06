/**
 * vim: tabstop=2:shiftwidth=2:softtabstop=2:expandtab
 * cnf.h
 *
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

#ifndef _CNF_H_
#define _CNF_H_

typedef struct config{
	char			*uri;

	char			*binddn;
	char			*bindpw;

	char			*basedn;
	int				version;

	int				start_tls;
	char			*tls_cacertfile;
	char			*tls_cacertdir;
	char			*tls_certfile;
	char			*tls_certkey;
	char			*tls_ciphersuite;
	char			*tls_reqcert;
} config_t;

extern int config_parse_file( const char *filename, config_t *c );

extern config_t *config_new( void );
extern void config_free( config_t *c );

#endif /* _CNF_H_ */