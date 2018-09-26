#include "paper_table.hpp"
#include "config.h"
#include "log.h"

PaperTable::PaperTable(std::string objectName, double positionX, double positionY,
                                     int width, int height) : GameObject(objectName,
                                                                         positionX,
                                                                         positionY,
                                                                         width, height){
table = new Table(ASSETS_PATH("/sprites/mesa.png"), positionX, positionY, width, height);
paper = new Paper(ASSETS_PATH("/sprites/papeis(19X21).png"), positionX + 20, positionY - 2, 10, 40);
}

PaperTable::~PaperTable(){

}

void PaperTable::update(double timeElapsed){
   table->update(timeElapsed);
   paper->update(timeElapsed);
}

void PaperTable::draw(){
   table->draw();
   paper->draw();
}

Paper* PaperTable::getPaper(){
    return paper;
}

Table* PaperTable::getTable(){
    return table;
}
