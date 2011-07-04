/*
 * HttpRequest.h
 *
 *  Created on: Jun 1, 2011
 *      Author: kyle
 */

#ifndef HTTPREQUEST_H_
#define HTTPREQUEST_H_

#include "engine/engine.h"
#include "mongoose/mongoose.h"

struct HttpHeader {
	String name;
	String value;
};

class HttpRequest {
private:
	/// Request members
	String requestMethod;
	String uri;
	String httpVersion;
	uint64 remoteIp;
	short remotePort;
	short statusCode;
	bool ssl;
	String userData;

	Vector<String> contexts;

	VectorMap<String, String> headers;

	VectorMap<String, String> parameters;

public:
	HttpRequest();
	virtual ~HttpRequest();

	void update(const struct mg_request_info *request_info);

	String getBaseContext();

	String getUri() {
		return uri;
	}

	String getRequestMethod() {
		return requestMethod;
	}

	String getHeader(String key) {
		if(headers.contains(key))
			return headers.get(key);

		return "";
	}

	String getParameter(String key) {
		if(parameters.contains(key))
			return parameters.get(key);

		return "";
	}

	uint64 getRemoteIp() {
		return remoteIp;
	}

	void updatePostData(String data);

private:

};

#endif /* HTTPREQUEST_H_ */
