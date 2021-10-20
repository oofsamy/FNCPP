#include "News.hpp"

std::string BattleRoyaleNewsPost::GetImage()
{
	return this->Image;
}

bool BattleRoyaleNewsPost::GetHidden()
{
	return this->Hidden;
}

std::string BattleRoyaleNewsPost::GetType()
{
	return this->Type;
}

std::string BattleRoyaleNewsPost::GetBody()
{
	return this->Body;
}

bool BattleRoyaleNewsPost::GetSpotlight()
{
	return this->Spotlight;
}

std::string BattleRoyaleNewsPost::GetAdSpace()
{
	return this->AdSpace;
}

BattleRoyaleNewsPost::BattleRoyaleNewsPost(std::string _Image, bool _Hidden, std::string _Type, std::string _Body, bool _Spotlight, std::string _AdSpace)
{
	Image = _Image;
	Hidden = _Hidden;
	Type = _Type;
	Body = _Body;
	Spotlight = _Spotlight;
	AdSpace = _AdSpace;
}
