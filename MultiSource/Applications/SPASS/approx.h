/**************************************************************/
/* ********************************************************** */
/* *                                                        * */
/* *                  CLAUSE APPROXIMATION                  * */
/* *                                                        * */
/* *  $Module:   APPROX                                     * */ 
/* *                                                        * */
/* *  Copyright (C) 1998, 1999, 2000, 2001                  * */
/* *  MPI fuer Informatik                                   * */
/* *                                                        * */
/* *  This program is free software; you can redistribute   * */
/* *  it and/or modify it under the terms of the GNU        * */
/* *  General Public License as published by the Free       * */
/* *  Software Foundation; either version 2 of the License, * */
/* *  or (at your option) any later version.                * */
/* *                                                        * */
/* *  This program is distributed in the hope that it will  * */
/* *  be useful, but WITHOUT ANY WARRANTY; without even     * */
/* *  the implied warranty of MERCHANTABILITY or FITNESS    * */
/* *  FOR A PARTICULAR PURPOSE.  See the GNU General Public * */
/* *  License for more details.                             * */
/* *                                                        * */
/* *  You should have received a copy of the GNU General    * */
/* *  Public License along with this program; if not, write * */
/* *  to the Free Software Foundation, Inc., 59 Temple      * */
/* *  Place, Suite 330, Boston, MA  02111-1307  USA         * */
/* *                                                        * */
/* *                                                        * */
/* $Revision: 21527 $                                        * */
/* $State$                                            * */
/* $Date: 2005-04-25 08:10:28 +0400 (Mon, 25 Apr 2005) $                             * */
/* $Author: duraid $                                       * */
/* *                                                        * */
/* *             Contact:                                   * */
/* *             Christoph Weidenbach                       * */
/* *             MPI fuer Informatik                        * */
/* *             Stuhlsatzenhausweg 85                      * */
/* *             66123 Saarbruecken                         * */
/* *             Email: weidenb@mpi-sb.mpg.de               * */
/* *             Germany                                    * */
/* *                                                        * */
/* ********************************************************** */
/**************************************************************/

/* $RCSfile$ */

#ifndef _APPROX_
#define _APPROX_

#include "list.h"
#include "clause.h"

void approx_Init(void);

LIST approx_MonadicByProjection(LIST, FLAGSTORE, PRECEDENCE);
LIST approx_MonadicByTermEncoding(LIST, FLAGSTORE, PRECEDENCE);
LIST approx_MonadicMakeLinear(LIST, FLAGSTORE, PRECEDENCE);
LIST approx_HornMonadicFlattenHeads(CLAUSE, BOOL, BOOL, FLAGSTORE, PRECEDENCE);
LIST approx_MakeHorn(CLAUSE, FLAGSTORE, PRECEDENCE);

#endif
