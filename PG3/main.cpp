#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	char name[8];
	struct cell* prev;
	struct cell* next;
}CELL;

//データの挿入
void Insert(CELL* currentCell, const char* buf);
void PushBack(CELL* currentCell, const char* buf);
//要素一覧表示
int Index(CELL* endCell);
//リストの最後尾を削除
void Delete(CELL* deleteCell);
//編集
void Edit(CELL* editCell);
//任意の位置までアドレスをたどる
CELL* GetInsertCellAddress(CELL* endCell, int iterator);

int sceneNum = 0;
int eleSceneNum = 0;

int main()
{
	int iterator = 0;
	char name[8];
	CELL* insertCell;

	int eleNum = 0;

	CELL head;
	head.prev = nullptr;	//初期化的なことをしてあげないとゴミが入っちゃう
	head.next = nullptr;	//初期化的なことをしてあげないとゴミが入っちゃう

	while (true)
	{
		//初期画面
		if (sceneNum == 0)
		{
			printf("[ 要素の操作 ]\n");
			printf("1.要素の一覧表示\n");
			printf("2.最後尾に要素の挿入\n");
			printf("3.要素の編集\n");
			printf("4.最後尾の要素の削除\n");
			printf("\n");
			printf("---------------------\n");
			printf("操作を選択してください\n");

			//シーン切り替え
			while (true)
			{
				int num;
				scanf_s("%d", &num);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				if (num >= 1 && num <= 4)
				{
					sceneNum = num;
					break;
				}
				else
				{
					printf("正しい操作番号を入力してください\n");
				}
			}
		}

		//要素一覧
		else if (sceneNum == 1)
		{
			printf("[ 要素の表示 ]\n");
			printf("1.要素の一覧表示\n");
			printf("2.順番を指定して要素を表示\n");
			printf("3.初期画面に戻る\n");
			printf("\n");
			printf("---------------------\n");
			printf("操作を選択してください\n");

			//シーン切り替え
			while (true)
			{
				int num;
				scanf_s("%d", &num);
				scanf_s("%*[^\n]%*c");
				printf("\n");
				if (num >= 1 && num <= 3)
				{
					eleSceneNum = num;
					break;
				}
				else
				{
					printf("正しい操作番号を入力してください\n");
				}
			}

			if (eleSceneNum == 1)
			{
				printf("[ 要素の一覧表示 ]\n");
				printf("要素一覧:\n");

				eleNum = Index(&head);

				if (head.next == nullptr)
				{
					printf("存在していません\n");
				}

				printf("要素数:%d\n", eleNum);
				printf("\n");
				printf("---------------------\n");
				printf("1.[ 要素の表示 ]に戻る\n");
				printf("2.初期画面に戻る\n");

				int num;
				scanf_s("%d", &num);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				if (num == 1)
				{
					sceneNum = 1;
				}
				else if (num == 2)
				{
					sceneNum = 0;
				}
				else
				{
					printf("正しい操作番号を入力してください\n");
				}
			}
			if (eleSceneNum == 2)
			{
				printf("[ 順番を指定して要素を表示 ]\n");
				printf("表示したい要素の順番を指定してください\n");

				scanf_s("%d", &iterator);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				insertCell = GetInsertCellAddress(&head, iterator);
				if (insertCell->next != nullptr)
				{
					printf("%d番目の要素は%sです\n", iterator, insertCell->name);
				}
				else
				{
					printf("存在していません\n");
				}

				printf("---------------------\n");
				printf("1.[ 要素の表示 ]に戻る\n");
				printf("2.初期画面に戻る\n");

				int num;
				scanf_s("%d", &num);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				if (num == 1)
				{
					sceneNum = 1;
				}
				else if (num == 2)
				{
					sceneNum = 0;
				}
				else
				{
					printf("正しい操作番号を入力してください\n");
				}
			}
			if (eleSceneNum == 3)
			{
				sceneNum = 0;
			}

			//シーン切り替え
			while (sceneNum != 1)
			{
				if (sceneNum == 0)
				{
					break;
				}
				else
				{
					printf("---------------------\n");
					printf("0.初期画面に戻る\n");
					int num;
					scanf_s("%d", &num);
					scanf_s("%*[^\n]%*c");
					printf("\n");

					if (num == 0)
					{
						sceneNum = num;
						break;
					}
					else
					{
						printf("正しい操作番号を入力してください\n");
					}
				}
			}
		}

		//挿入
		else if (sceneNum == 2)
		{
			printf("[ リスト要素の挿入 ]\n");
			printf("追加する要素数を入力してください\n");

			while (true)
			{
				scanf_s("%d", &iterator);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				insertCell = GetInsertCellAddress(&head, iterator);

				break;
			}

			while (true)
			{
				printf("[ リスト要素の挿入 ]\n");
				printf("追加する要素の内容を入力してください\n");

				scanf_s("%s", name, 8);

				Insert(insertCell, name);
				printf("%sが%d番目に追加されました\n", insertCell->next->name, iterator);
				break;
			}

			//シーン切り替え
			printf("---------------------\n");
			printf("0.初期画面に戻る\n");
			while (true)
			{
				int num;
				scanf_s("%d", &num);
				scanf_s("%*[^\n]%*c");
				printf("\n");

				if (num == 0)
				{
					sceneNum = num;
					break;
				}
				else
				{
					printf("正しい操作番号を入力してください\n");
				}
			}
		}

		//編集
		else if (sceneNum == 3)
		{
			printf("[ 要素の編集 ]\n");
			printf("編集したい要素の番号を指定してください\n");

			scanf_s("%d", &iterator);
			scanf_s("%*[^\n]%*c");
			printf("\n");

			insertCell = GetInsertCellAddress(&head, iterator);
			if (insertCell->next != nullptr)
			{
				Edit(insertCell);
				printf("%d番目の要素が%sに変更されました\n", iterator, insertCell->next->name);
			}
			else
			{
				printf("%d番目の要素は存在していません\n", iterator);
				sceneNum = 0;
			}

			//シーン切り替え
			while (true)
			{
				if (sceneNum == 0)
				{
					printf("編集するものが存在しないため初期画面に戻ります\n");
					break;
				}
				else
				{
					printf("---------------------\n");
					printf("0.初期画面に戻る\n");
					int num;
					scanf_s("%d", &num);
					scanf_s("%*[^\n]%*c");
					printf("\n");

					if (num == 0)
					{
						sceneNum = num;
						break;
					}
					else
					{
						printf("正しい操作番号を入力してください\n");
					}
				}
			}
		}
		
		//削除
		else if (sceneNum == 4)
		{
			printf("[ 要素の削除 ]\n");
			printf("最後尾の要素を削除しました\n");

			//シーン切り替え
			while (true)
			{
				if (sceneNum == 0)
				{
					printf("削除するものないから初期画面戻るよ\n");
					break;
				}
				else
				{
					printf("---------------------\n");
					printf("0.初期画面に戻る\n");
					int num;
					scanf_s("%d", &num);
					scanf_s("%*[^\n]%*c");
					printf("\n");

					if (num == 0)
					{
						sceneNum = num;
						break;
					}
					else
					{
						printf("正しい操作番号を入力してください\n");
					}
				}
			}
		}
	}

	return 0;
}

void Insert(CELL* currentCell, const char* buf)
{
	// 新規にセルを作成
	CELL* cell;
	// 新規作成するセル分のメモリを確保する
	cell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(cell->name, 8, buf);
	cell->prev = currentCell;
	cell->next = currentCell->next;

	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = cell;
	}

	// 追加する前の最後尾に新規セルのポインタを代入
	currentCell->next = cell;
	cell->prev = currentCell;
}

void PushBack(CELL* currentCell, const char* buf)
{
	// 新規にセルを作成
	CELL* cell;
	// 新規作成するセル分のメモリを確保する
	cell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(cell->name, 8, buf);
	cell->next = nullptr;
	printf("%sが最後尾に追加されました\n", cell->name);

	// 追加する前の最後尾を検索する
	// 最新のセルのアドレスの一つ目の処理は引数から持ってきたリストのうち最初のセルのアドレスが該当する
	while (currentCell->next != nullptr)
	{
		currentCell = currentCell->next;
	}

	// 追加する前の最後尾に新規セルのポインタを代入する
	currentCell->next = cell;
	cell->prev = currentCell;
}

int Index(CELL* endCell)
{
	int eleNum = 0;
	// nextに何か入ってる限り出力する
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d:%s\n", eleNum, endCell->name);

		eleNum++;
	}
	return eleNum;
}

void Delete(CELL* endCell)
{
	// 最後尾削除する
	while (endCell->next->next != nullptr)
	{
		endCell = endCell->next;
	}
	endCell->next = nullptr;
}

void Edit(CELL* editCell)
{
	char name[8] = {};
	scanf_s("%s", name, 8);
	strcpy_s(editCell->next->name, 8, name);
}

CELL* GetInsertCellAddress(CELL* endCell, int iterator)
{
	for (int i = 0; i < iterator; i++)
	{
		if (endCell->next)
		{
			endCell = endCell->next;
		}
		else
		{
			break;
		}
	}
	return endCell;
}