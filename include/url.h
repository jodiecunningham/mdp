#if !defined( URL_H )
#define URL_H

/*
 * An object to store all urls of a slide.
 * Copyright (C) 2014 Michael Goehler
 *
 * This file is part of mdp.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * function: url_init to intialize a new url object
 */

typedef struct _url_t {
    char *link_name;
    char *target;
    int x;
    int y;
    struct _url_t *next;
} url_t;

void url_init(void);
int url_add(const char *link_name, int link_name_length, const char *target, int target_length, int x, int y);
char * url_get_target(int index);
char * url_get_name(int index);
int url_get_amount(void);
void url_purge(void);
void url_dump(void);
int url_count_inline(const char *line);

#endif // !defined( URL_H )
