/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConnectorDB.h
 * Author: glebmillenium
 *
 * Created on 18 февраля 2017 г., 1:58
 */

#ifndef CONNECTORDB_H
#define CONNECTORDB_H
#include <iostream>
#include <cstring>

using namespace std;

class ConnectorDB {
public:
    ConnectorDB();
    ConnectorDB(const ConnectorDB& orig);
    virtual ~ConnectorDB();
    static string run(char* condition);
private:
    
};

#endif /* CONNECTORDB_H */
