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
			cout << "\n ������ �������� �α��� �Ǿ����ϴ�." << endl;
			fclose(file);
			return true;
		}
		else {
			cout << "�Է��Ͻ� ������ ���� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
			return false;
		}
	}
	return false;
}