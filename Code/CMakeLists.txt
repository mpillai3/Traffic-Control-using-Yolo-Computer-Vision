cmake_minimum_required(VERSION 2.8)
project(computerVision)

set(OPENCV_DIR ../install/lib/cmake/opencv4)
set(CMAKE_PREFIX_PATH ../install/lib/cmake/opencv4)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package(OpenCV REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS}
                    ./ 
                    )
add_executable( 
# The name of the executable file
            computerVision
# Dependence source files
            Yolo.cpp
            ProcessedImage.cpp
            CongestionScore.cpp
            UniformCostSearch.cpp
            TrafficLight.cpp
            TrafficDatabaseAccessException.cpp
            TrafficDatabase.cpp
            SecondsConverter.cpp
            Road.cpp
            RedLight.cpp
            RandomPhotoTaker.cpp
            QuickMapFileParser.cpp
            QuickDatabaseConfigParser.cpp
            NorthSouthState.cpp
            MinutesConverter.cpp
            MillisecondsConverter.cpp
            IOException.cpp
            IntersectionDatabase.cpp
            Intersection.cpp
            HoursConverter.cpp
            GreenLight.cpp
            FormatException.cpp
            ExplicitMapFileParser.cpp
            EastWestState.cpp
            DefaultTrafficLightScheduler.cpp
            DefaultCongestionScoreAnalyzer.cpp
            Controller.cpp
            Camera.cpp
            Cache.cpp
            BaseException.cpp
            ArgumentInterpreter.cpp
            AbstractStoppableThread.cpp
            AbstractIntersectionState.cpp
            main.cpp


            


        )
target_link_libraries(computerVision ${OpenCV_LIBS})
