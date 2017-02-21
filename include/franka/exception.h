#pragma once

#include <stdexcept>
#include <string>

/**
 * @file exception.h
 * Contains exception definitions.
 */

namespace franka {

/**
 * Base class for all exceptions used by `libfranka`.
 */
struct Exception : public std::runtime_error {
  using std::runtime_error::runtime_error;
};

/**
 * NetworkException is thrown when a connection to FRANKA cannot be established,
 * or when a timeout occurs.
 */
struct NetworkException : public Exception {
  using Exception::Exception;
};

/**
 * ProtocolException is thrown when the server returns an incorrect message.
 */
struct ProtocolException : public Exception {
  using Exception::Exception;
};

/**
 * IncompatibleVersionException is thrown if the server does not support this
 * version of libfranka.
 */
struct IncompatibleVersionException : public Exception {
  using Exception::Exception;
};

}  // namespace franka