#pragma once

#include "ofLog.h"
#include "ofTexture.h"
#include <string>
#include "SpoutSender.h"

namespace ofxSpout {
	class Sender {
	public:
		Sender();
		~Sender();

		void init(std::string channelName, const ofTexture& texture);
		void init(std::string channelName, int glFormat = GL_RGBA);
		void release();
		bool isInitialized() const;

		bool send(const ofTexture& texture);

		std::string getChannelName() const;
		bool setVerticalSync(bool verticalSync);
		bool getVerticalSync();
	protected:
		std::string channelName;

		SpoutSender * spoutSender;
		int glFormat;
	};
}
