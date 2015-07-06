#ifndef __RS_CODING_H__
#define __RS_CODING_H__

#include "coding.h"

class RSCoding : public Coding {
    public:
        RSCoding(int k, int m, int w, ErlNifEnv* env) : Coding(k, m, w, env) {};
        vector<ERL_NIF_TERM> doEncode(ERL_NIF_TERM dataBin);
        ERL_NIF_TERM doDecode(vector<ERL_NIF_TERM> blockList, vector<int> blockIdList, size_t dataSize);
        vector<ERL_NIF_TERM> doRepair(vector<ERL_NIF_TERM> blockList, vector<int> blockIdList, vector<int> repairList);
        void checkParams();
};

#endif
