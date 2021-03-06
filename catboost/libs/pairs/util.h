#pragma once

#include <catboost/libs/data_types/groupid.h>
#include <catboost/libs/data_types/pair.h>

#include <catboost/libs/helpers/restorable_rng.h>


void GeneratePairLogitPairs(
    const TVector<TGroupId>& groupId,
    const TVector<float>& targetId,
    int maxPairCount,
    TRestorableFastRng64* rand,
    TVector<TPair>* result);

TVector<TPair> GeneratePairLogitPairs(
    const TVector<TGroupId>& groupId,
    const TVector<float>& targetId,
    int maxPairCount,
    ui64 seed);

