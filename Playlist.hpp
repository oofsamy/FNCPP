#pragma once
#include <string>
class Playlist {
	private:
		std::string URL;
		std::string InternalName;
		std::string SpecialBorder;
		std::string Type;
		std::string Violator;
		std::string DisplaySubname;
		std::string Description;

	public:
		std::string GetImageUrl();
		std::string GetInternalName();
		std::string GetType();
		std::string GetSpecialBorder();
		std::string GetDisplaySubname();
		std::string GetDescription();

		bool operator==(Playlist& P) {
			if (P.GetInternalName() == this->GetInternalName()) {
				return true;
			}
			return false;
		}

		Playlist(std::string _URL, std::string _InternalName, std::string _SpecialBorder, std::string _Type, std::string _Violator, std::string _DisplaySubname, std::string _Description);
};