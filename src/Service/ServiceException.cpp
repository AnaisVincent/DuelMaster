#include "..\Service_headers\Service.h"

Service::ServiceException::ServiceException(HttpStatus status, std::string msg) : httpStatus(status), msg(msg)
{
}

Service::HttpStatus Service::ServiceException::status () const {
    return httpStatus;
}

const char* Service::ServiceException::what () const noexcept {
    return msg.c_str();
}