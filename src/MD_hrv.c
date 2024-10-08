//
//  MD_hrv.c
//  C_polished
//
//  Created by Carl Henning Lubba on 22/09/2018.
//  Copyright © 2018 Carl Henning Lubba. All rights reserved.
//

#include "MD_hrv.h"
#include "stats.h"

double MD_hrv_classic_pnn40(const double y[], const int size){
    
    // NaN check
    for(int i = 0; i < size; i++)
    {
        if(isnan(y[i]))
        {
            return NAN;
        }
    }
    
    const int pNNx = 40;
    
    // compute diff
    const int allocsize = (size-1) * sizeof(double);
    double * Dy = malloc(allocsize);
    diff(y, size, Dy);
    
    double pnn40 = 0;
    for(int i = 0; i < size-1; i++){
        if(fabs(Dy[i])*1000 > pNNx){
            pnn40 += 1;
        }
    }
    
    free(Dy);
    
    return pnn40/(size-1);
}

