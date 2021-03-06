//
// Created by CainHuang on 2020/1/12.
//

#ifndef ONDECODELISTENER_H
#define ONDECODELISTENER_H

#include "../AVMediaHeader.h"

/**
 * 读帧监听器
 */
class OnDecodeListener {
public:
    // 读取到的AVFrame数据回调
    virtual void onDecodedFrame(AVFrame *frame, AVMediaType type) = 0;

    // 是否等待缓存队列消耗数据
    virtual bool isDecodeWaiting() = 0;
};

#endif //ONDECODELISTENER_H
