#ifndef INFORMATION_H_
#define INFORMATION_H_

// F1: プレイヤー情報
typedef struct PLAYER {
	int  playerId;	// プレイヤーID
	char nickName[256];	// ニックネーム
} Player_t;

// F2: パズル/ランキング情報
typedef struct RANKING {
	int playerId;
	int cleartime;
}RANKING_t;
typedef struct PUZZLE {
	int  puzzleId;				// パズルID
	char puzzleTitle[256];		// パズルタイトル
	int  x_size;
	int  y_size;
	int  puzzleData[20][20];	// パズルデータ
	int  puzzleMakerId;			// パズル作成者ID
	RANKING_t ranking[10];
} Puzzle_t;


#endif // INFORMATION_H_

