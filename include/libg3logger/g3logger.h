#pragma once

#include <g3log/logworker.hpp>

#include "G3LogSinks.h"

namespace libg3logger {

  struct G3Logger {

    G3Logger( const std::string &appName );
    void logBanner( void );

    void verbose( bool );

    std::unique_ptr<g3::LogWorker> worker;
    std::unique_ptr<g3::SinkHandle<ColorStderrSink>> stderrHandle;
  };


}
