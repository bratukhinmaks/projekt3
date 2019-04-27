#cmake_minimum_required(VERSION 3.13)
project(project_2)

set(CMAKE_CXX_STANDARD 14)
set(MESSAGES messages/my_message.cpp messages/my_message.h messages/text_message.cpp messages/text_message.h messages/my_messages.h messages/error_message.cpp messages/error_message.h messages/test_message.cpp messages/test_message.h messages/multimedia_message.cpp messages/multimedia_message.h)
set(PROD_AND_DISP message_producer.cpp message_producer.h message_dispatcher.cpp message_dispatcher.h)
set(MESSAGE_SERVICES message_services/message_service.cpp message_services/message_service.h message_services/message_services.h message_services/doc_presenter.cpp message_services/doc_presenter.h message_services/multimedia_player.cpp message_services/multimedia_player.h message_services/error_presenter.cpp message_services/error_presenter.h message_services/test_runner.cpp message_services/test_runner.h)
add_executable(LAB09 main.cpp complex.cpp complex.h fifo.cpp fifo.h ${PROD_AND_DISP} ${MESSAGES} ${MESSAGE_SERVICES})