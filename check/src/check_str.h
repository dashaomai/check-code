/*
  Check: a unit test framework for C
  Copyright (C) 2001, Arien Malec

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef CHECK_STR_H
#define CHECK_STR_H

/* Return a string representation of the given TestResult.  Return
   value has been malloc'd, and must be freed by the caller */
char *tr_str (TestResult *tr);

/* Return a string representation of the given SRunner's run
   statistics (% passed, num run, passed, errors, failures). Return
   value has been malloc'd, and must be freed by the caller
*/ 
char *sr_stat_str (SRunner *sr);

#endif /* CHECK_STR_H */