#include "Playlist.hpp"

std::string Playlist::GetImageUrl()
{
	return this->GetImageUrl();
}

std::string Playlist::GetInternalName()
{
	return this->GetInternalName();
}

std::string Playlist::GetType()
{
	return this->GetType();
}

std::string Playlist::GetSpecialBorder()
{
	return this->GetSpecialBorder();
}

std::string Playlist::GetDisplaySubname()
{
	return this->GetDisplaySubname();
}

std::string Playlist::GetDescription() {
	return this->GetDescription();
}

Playlist::Playlist(std::string _URL, std::string _InternalName, std::string _SpecialBorder, std::string _Type, std::string _Violator, std::string _DisplaySubname, std::string _Description) {
	URL = _URL;
	InternalName = _InternalName;
	SpecialBorder = _SpecialBorder;
	Type = _Type;
	Violator = _Violator;
	DisplaySubname = _DisplaySubname;
	Description = _Description;
}
