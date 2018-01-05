#pragma once

class Player {
public:

	Player() {

	}

	void isGameOver() {
		if (lives == 0) {
			//game over logic
		}
	}

	void moneyEarned() {
		// if enemy isKilled money+=moneyWorth
	}

private:
	
	int money = 0;
	int lives = 20;
};