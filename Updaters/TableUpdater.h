#pragma once
#include "Updater.h"

class TableUpdater : public Updater {

    void updateStatus( int tableNum, TableStatus newStatus);
    void returnPartyToWaitlist(int tableNum, int id);
};