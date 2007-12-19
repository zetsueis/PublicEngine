/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef DATAGRAMPROXYSERVICECLIENT_H_
#define DATAGRAMPROXYSERVICECLIENT_H_

#include "engine/engine.h"

class DatagramProxyServiceClient : public DatagramServiceClient, public Logger 
{
	class DatagramProxyService* service;

	class DatagramProxyClient* proxyClient;

public:
	DatagramProxyServiceClient(DatagramProxyService* serv, string& host, int port);

	void run();

	void stop();

	void handleMessage(Packet* message);

	void forwardMessage(Packet* message);

	// setters
	inline void setProxyClient(DatagramProxyClient* pclient)
	{
		proxyClient = pclient;
	}

};

#endif /*DATAGRAMPROXYSERVICECLIENT_H_*/