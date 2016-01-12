#include "..\Service_headers\Service.h"

Service::AbstractService::AbstractService(const std::string & pattern)
{
	setPattern(pattern);
}

Service::AbstractService::~AbstractService() {
    
}

const std::string& Service::AbstractService::getPattern () const {
    return pattern;
}

void Service::AbstractService::setPattern (const std::string& pattern) {
    this->pattern = pattern;
}

Service::HttpStatus Service::AbstractService::get (Json::Value& out, int id) const {
    throw ServiceException(HttpStatus::NOT_IMPLEMENTED,"Non implanté");
}

Service::HttpStatus Service::AbstractService::post (const Json::Value& in, int id) {
    throw ServiceException(HttpStatus::NOT_IMPLEMENTED,"Non implanté");
}

Service::HttpStatus Service::AbstractService::put (Json::Value& out, const Json::Value& in) {
    throw ServiceException(HttpStatus::NOT_IMPLEMENTED,"Non implanté");
}

Service::HttpStatus Service::AbstractService::remove (int id) {
    throw ServiceException(HttpStatus::NOT_IMPLEMENTED,"Non implanté");
}
