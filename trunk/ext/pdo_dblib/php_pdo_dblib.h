/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2010 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Wez Furlong <wez@php.net>                                    |
  |         Frank M. Kromann <frank@kromann.info>                        |
  +----------------------------------------------------------------------+
*/

/* $Id: php_pdo_dblib.h 293036 2010-01-03 09:23:27Z sebastian $ */

#ifndef PHP_PDO_DBLIB_H
#define PHP_PDO_DBLIB_H

#if PDO_DBLIB_IS_MSSQL
extern zend_module_entry pdo_mssql_module_entry;
#define phpext_pdo_mssql_ptr &pdo_mssql_module_entry
#else
extern zend_module_entry pdo_dblib_module_entry;
#define phpext_pdo_dblib_ptr &pdo_dblib_module_entry
#endif

#ifdef PHP_WIN32
# define PHP_PDO_DBLIB_API __declspec(dllexport)
#else
# define PHP_PDO_DBLIB_API
#endif

#ifdef ZTS
# include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(pdo_dblib);
PHP_MSHUTDOWN_FUNCTION(pdo_dblib);
PHP_MINFO_FUNCTION(pdo_dblib);
PHP_RSHUTDOWN_FUNCTION(pdo_dblib);

#endif
