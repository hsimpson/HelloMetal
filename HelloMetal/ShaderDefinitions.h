//
//  ShaderDefinitions.h
//  HelloMetal
//
//  Created by Daniel Toplak on 11.01.22.
//

#ifndef ShaderDefinitions_h
#define ShaderDefinitions_h

#include <simd/simd.h>

struct Vertex {
    vector_float4 color;
    vector_float2 pos;
};

struct FragmentUniforms {
    float brightness;
};

#endif /* ShaderDefinitions_h */
