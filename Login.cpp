#include "Login.h"

Login::Login()
{
}


Login::~Login()
{
}

bool Login::matchAdmin(std::string id, std::string pw)
{
	FILE *file;
	fopen_s(&file, "admin.txt", "r");
	while (!feof(file))
	{
		char t_id[10], t_pw[10];
		fscanf_s(file, "%s %s", t_id, sizeof(t_id), t_pw, sizeof(t_pw));
		//std::cout << t_id << " " << t_pw << " \n";
		

		if (t_id == id && t_pw == pw) {
			cout << "\n 관리자 계정으로 로그인 되었습니다." << endl;
			fclose(file);
			return true;
		}
		else {
			cout << "입력하신 정보가 맞지 않습니다. 다시 입력해주세요." << endl;
			return false;
		}
	}
	return false;
}