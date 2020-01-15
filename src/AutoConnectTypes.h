/**
 *  AutoConnect quoted type declarations.
 *  @file AutoConnectTypes.h
 *  @author hieromon@gmail.com
 *  @version  1.2.0
 *  @date 2020-01-15
 *  @copyright  MIT license.
 */

#ifndef _AUTOCONNECTTYPES_H_
#define _AUTOCONNECTTYPES_H_

/**< A type to save established credential at WiFi.begin automatically. */
typedef enum AC_SAVECREDENTIAL {
  AC_SAVECREDENTIAL_NEVER,
  AC_SAVECREDENTIAL_AUTO
} AC_SAVECREDENTIAL_t;

/**< Startup URL on the boot */
typedef enum AC_ONBOOTURI {
  AC_ONBOOTURI_ROOT,
  AC_ONBOOTURI_HOME
} AC_ONBOOTURI_t;

/**< Scope of certification influence */
typedef enum AC_AUTHSCOPE {
  AC_AUTHSCOPE_PARTIAL,      // Available for particular AUX-pages.
  AC_AUTHSCOPE_AUX,          // All AUX-pages are affected by an authentication.
  AC_AUTHSCOPE_PORTAL        // All AutoConnect pages are affected by an authentication.
} AC_AUTHSCOPE_t;

/**< A type to enable authentication. */
typedef enum AC_AUTH {
  AC_AUTH_NONE,
  AC_AUTH_DIGEST,
  AC_AUTH_BASIC
} AC_AUTH_t;

#endif // !_AUTOCONNECTTYPES_H_
