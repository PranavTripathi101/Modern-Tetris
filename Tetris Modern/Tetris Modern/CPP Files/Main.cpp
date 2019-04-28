#include <iostream>
#include <string>
#include <memory>
#include "../Header Files/Grid.h"
#include "../Header Files/Block.h"
#include "../Header Files/IBlock.h"
#include "../Header Files/OBlock.h"
namespace Solution {

	constexpr static int width = 20;
	constexpr static int height = 15;
}

std::unique_ptr<Block> getNextBlock(int count, Grid &g) {
	if (count % 2 == 0) { return std::make_unique<OBlock>(count, g); }
	else { return std::make_unique<IBlock>(count, g);
	}
}

int main() {
	Grid g(Solution::height, Solution::width);
	//g.print();
	std::string input;
	int count = 1;

	std::unique_ptr<Block> block = std::make_unique<OBlock>( count, g );
	g.print();
	while (true) {
		std::cin >> input;
		if (input == "down") {
			if (block->down()) {
				count++;
				block = getNextBlock(count, g);
			}
		}
		else if (input == "left") {
			if (block->left()) {
				count++;
				block = getNextBlock(count, g);
			}
		}
		else if (input == "right") {
			if (block->right()) {
				count++;
				block = getNextBlock(count, g);
			}
		}
		else if (input == "drop") {
			block->drop(); 
			count++;
			block = getNextBlock(count, g);

		}
		else if (input == "quit") {
			break;
		}

		g.print();
	}

}