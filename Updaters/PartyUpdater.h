#pragma once
#include "Updater.h"



class PartyUpdater : public Updater {

    void updateName(int id, QString newName);
    void updateSize(int id, int newSize);
    void updateNameAndSize(int id, QString newName, int newSize);
    void addParty(QString newName, int newSize);
    void deleteParty(int id);
    void sitParty(int id, int tableNum);
};