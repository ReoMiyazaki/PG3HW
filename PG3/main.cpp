#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <list>

int main()
{	// 山手線の駅名のリスト
	std::list<const char*>list
	{
		"Tokyo",				// 東京
		"Kanda",				// 神田
		"Akihabara",			// 秋葉原
		"Okachimachi",			// 御徒町
		"Ueno",					// 上野
		"Uguisudani",			// 鶯谷
		"Nippori",				// 日暮里 (この後に1971開業の西日暮里<Nishi-Nippori>が入る)
		"Tabata",				// 田端
		"Komagome",				// 駒込
		"Sugamo",				// 巣鴨
		"Otsuka",				// 大塚
		"Ikebukuro",			// 池袋
		"Mejiro",				// 目白
		"Takadanobaba",			// 高田馬場
		"Shin-Okubo",			// 新大久保
		"Shinjuku",				// 新宿
		"Yoyogi",				// 代々木
		"Harajuku",				// 原宿
		"Shibuya",				// 渋谷
		"Ebisu",				// 恵比寿
		"Meguro",				// 目黒
		"Gotanda",				// 五反田
		"Osaki",				// 大崎
		"Shinagawa",			// 品川 (この後に2020開業の高輪ゲートウェイ<Takanawa-Gateway>が入る)
		"Tamachi",				// 田町
		"Hamamatsucho",			// 浜松町
		"Shimbashi",			// 新橋
		"Yurakucho",			// 有楽町
	};

	printf("1970年\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		printf("%s\n", *i);
	}

	printf("\n2019年\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		//田畑まで来たら
		if (*i == "Tabata")
		{
			i = list.insert(i, "Nishi-Nippori");	//西日暮里を挿入して
			printf("%s\n", *i);	//表示までしたら
			++i;				//イテレータを次に進める(田畑を表示)
		}
		printf("%s\n", *i);
	}

	printf("\n2022年\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		//田町まで来たら
		if (*i == "Tamachi")
		{
			i = list.insert(i, "Takanawa-Gateway");	//高輪ゲートウェイを挿入して
			printf("%s\n", *i);	//表示までしたら
			++i;				//イテレータを次に進める(田町を表示)
		}
		printf("%s\n", *i);
	}

	return 0;
}