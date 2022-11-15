#include <iostream>
#include <array>
#include <unistd.h>
#include <optional>
#include <expected.hpp>

namespace SharedState
{
    enum class Status
    {
        Ok,
        AccessDenied,
        DataSourceError,
        PipeError,
    };

    int mergestate(std::string arguments, std::string &output);
    std::string mergestate(std::string arguments);
    std::optional<std::string> optMergeState(std::string arguments);
    tl::expected<std::string,std::error_code> expMergestate(std::string arguments,bool willFail = false);

}