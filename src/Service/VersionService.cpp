#include "..\Service_headers\Service.h"

Service::VersionService::VersionService() : Service::AbstractService("/version")
{
}

Service::HttpStatus Service::VersionService::get(Json::Value & out, int id) const
{
	out["major"] = 1;
	out["minor"] = 0;
	return HttpStatus::OK;
}