#pragma once
#include <string>
class BattleRoyaleNewsPost {
	private:
		std::string Image;
		bool Hidden;
		std::string Type;
		std::string Title;
		std::string Body;
		bool Spotlight;
		std::string AdSpace;
	public:
		std::string GetImage();
		bool GetHidden();
		std::string GetType();
		std::string GetBody();
		bool GetSpotlight();
		std::string GetAdSpace();

		BattleRoyaleNewsPost(std::string _Image, bool _Hidden, std::string _Type, std::string _Body, bool _Spotlight, std::string _AdSpace);
};
