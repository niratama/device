// Arduino BGLib code library config file

#ifndef __BGLIB_CONFIG_H__
#define __BGLIB_CONFIG_H__

#define BGLIB_ENABLE_COMMAND_CLASS_SYSTEM
// #define BGLIB_ENABLE_COMMAND_CLASS_FLASH
#define BGLIB_ENABLE_COMMAND_CLASS_ATTRIBUTES
#define BGLIB_ENABLE_COMMAND_CLASS_CONNECTION
// #define BGLIB_ENABLE_COMMAND_CLASS_ATTCLIENT
#define BGLIB_ENABLE_COMMAND_CLASS_SM
#define BGLIB_ENABLE_COMMAND_CLASS_GAP
// #define BGLIB_ENABLE_COMMAND_CLASS_HARDWARE
// #define BGLIB_ENABLE_COMMAND_CLASS_TEST

#define BGLIB_ENABLE_EVENT_CLASS_SYSTEM
#define BGLIB_ENABLE_EVENT_CLASS_FLASH
#define BGLIB_ENABLE_EVENT_CLASS_ATTRIBUTES
#define BGLIB_ENABLE_EVENT_CLASS_CONNECTION
#define BGLIB_ENABLE_EVENT_CLASS_ATTCLIENT
#define BGLIB_ENABLE_EVENT_CLASS_SM
#define BGLIB_ENABLE_EVENT_CLASS_GAP
#define BGLIB_ENABLE_EVENT_CLASS_HARDWARE
#define BGLIB_ENABLE_EVENT_CLASS_TEST

#ifdef BGLIB_ENABLE_COMMAND_CLASS_SYSTEM
    #define BGLIB_ENABLE_COMMAND_SYSTEM_RESET
    #define BGLIB_ENABLE_COMMAND_SYSTEM_HELLO
    #define BGLIB_ENABLE_COMMAND_SYSTEM_ADDRESS_GET
    #define BGLIB_ENABLE_COMMAND_SYSTEM_REG_WRITE
    #define BGLIB_ENABLE_COMMAND_SYSTEM_REG_READ
    #define BGLIB_ENABLE_COMMAND_SYSTEM_GET_COUNTERS
    #define BGLIB_ENABLE_COMMAND_SYSTEM_GET_CONNECTIONS
    #define BGLIB_ENABLE_COMMAND_SYSTEM_READ_MEMORY
    #define BGLIB_ENABLE_COMMAND_SYSTEM_GET_INFO
    #define BGLIB_ENABLE_COMMAND_SYSTEM_ENDPOINT_TX
    #define BGLIB_ENABLE_COMMAND_SYSTEM_WHITELIST_APPEND
    #define BGLIB_ENABLE_COMMAND_SYSTEM_WHITELIST_REMOVE
    #define BGLIB_ENABLE_COMMAND_SYSTEM_WHITELIST_CLEAR
    #define BGLIB_ENABLE_COMMAND_SYSTEM_ENDPOINT_RX
    #define BGLIB_ENABLE_COMMAND_SYSTEM_ENDPOINT_SET_WATERMARKS
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_SYSTEM
    #define BGLIB_ENABLE_EVENT_SYSTEM_BOOT
    #define BGLIB_ENABLE_EVENT_SYSTEM_DEBUG
    #define BGLIB_ENABLE_EVENT_SYSTEM_ENDPOINT_WATERMARK_RX
    #define BGLIB_ENABLE_EVENT_SYSTEM_ENDPOINT_WATERMARK_TX
    #define BGLIB_ENABLE_EVENT_SYSTEM_SCRIPT_FAILURE
    #define BGLIB_ENABLE_EVENT_SYSTEM_NO_LICENSE_KEY
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_FLASH
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_DEFRAG
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_DUMP
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_ERASE_ALL
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_SAVE
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_LOAD
    #define BGLIB_ENABLE_COMMAND_FLASH_PS_ERASE
    #define BGLIB_ENABLE_COMMAND_FLASH_ERASE_PAGE
    #define BGLIB_ENABLE_COMMAND_FLASH_WRITE_WORDS
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_FLASH
    #define BGLIB_ENABLE_EVENT_FLASH_PS_KEY
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_ATTRIBUTES
    #define BGLIB_ENABLE_COMMAND_ATTRIBUTES_WRITE
    #define BGLIB_ENABLE_COMMAND_ATTRIBUTES_READ
    #define BGLIB_ENABLE_COMMAND_ATTRIBUTES_READ_TYPE
    #define BGLIB_ENABLE_COMMAND_ATTRIBUTES_USER_READ_RESPONSE
    #define BGLIB_ENABLE_COMMAND_ATTRIBUTES_USER_WRITE_RESPONSE
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_ATTRIBUTES
    #define BGLIB_ENABLE_EVENT_ATTRIBUTES_VALUE
    #define BGLIB_ENABLE_EVENT_ATTRIBUTES_USER_READ_REQUEST
    #define BGLIB_ENABLE_EVENT_ATTRIBUTES_STATUS
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_CONNECTION
    #define BGLIB_ENABLE_COMMAND_CONNECTION_DISCONNECT
    #define BGLIB_ENABLE_COMMAND_CONNECTION_GET_RSSI
    #define BGLIB_ENABLE_COMMAND_CONNECTION_UPDATE
    #define BGLIB_ENABLE_COMMAND_CONNECTION_VERSION_UPDATE
    #define BGLIB_ENABLE_COMMAND_CONNECTION_CHANNEL_MAP_GET
    #define BGLIB_ENABLE_COMMAND_CONNECTION_CHANNEL_MAP_SET
    #define BGLIB_ENABLE_COMMAND_CONNECTION_FEATURES_GET
    #define BGLIB_ENABLE_COMMAND_CONNECTION_GET_STATUS
    #define BGLIB_ENABLE_COMMAND_CONNECTION_RAW_TX
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_CONNECTION
    #define BGLIB_ENABLE_EVENT_CONNECTION_STATUS
    #define BGLIB_ENABLE_EVENT_CONNECTION_VERSION_IND
    #define BGLIB_ENABLE_EVENT_CONNECTION_FEATURE_IND
    #define BGLIB_ENABLE_EVENT_CONNECTION_RAW_RX
    #define BGLIB_ENABLE_EVENT_CONNECTION_DISCONNECTED
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_ATTCLIENT
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_FIND_BY_TYPE_VALUE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_READ_BY_GROUP_TYPE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_READ_BY_TYPE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_FIND_INFORMATION
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_READ_BY_HANDLE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_ATTRIBUTE_WRITE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_WRITE_COMMAND
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_INDICATE_CONFIRM
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_READ_LONG
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_PREPARE_WRITE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_EXECUTE_WRITE
    #define BGLIB_ENABLE_COMMAND_ATTCLIENT_READ_MULTIPLE
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_ATTCLIENT
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_INDICATED
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_PROCEDURE_COMPLETED
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_GROUP_FOUND
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_ATTRIBUTE_FOUND
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_FIND_INFORMATION_FOUND
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_ATTRIBUTE_VALUE
    #define BGLIB_ENABLE_EVENT_ATTCLIENT_READ_MULTIPLE_RESPONSE
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_SM
    #define BGLIB_ENABLE_COMMAND_SM_ENCRYPT_START
    #define BGLIB_ENABLE_COMMAND_SM_SET_BONDABLE_MODE
    #define BGLIB_ENABLE_COMMAND_SM_DELETE_BONDING
    #define BGLIB_ENABLE_COMMAND_SM_SET_PARAMETERS
    #define BGLIB_ENABLE_COMMAND_SM_PASSKEY_ENTRY
    #define BGLIB_ENABLE_COMMAND_SM_GET_BONDS
    #define BGLIB_ENABLE_COMMAND_SM_SET_OOB_DATA
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_SM
    #define BGLIB_ENABLE_EVENT_SM_SMP_DATA
    #define BGLIB_ENABLE_EVENT_SM_BONDING_FAIL
    #define BGLIB_ENABLE_EVENT_SM_PASSKEY_DISPLAY
    #define BGLIB_ENABLE_EVENT_SM_PASSKEY_REQUEST
    #define BGLIB_ENABLE_EVENT_SM_BOND_STATUS
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_GAP
    #define BGLIB_ENABLE_COMMAND_GAP_SET_PRIVACY_FLAGS
    #define BGLIB_ENABLE_COMMAND_GAP_SET_MODE
    #define BGLIB_ENABLE_COMMAND_GAP_DISCOVER
    #define BGLIB_ENABLE_COMMAND_GAP_CONNECT_DIRECT
    #define BGLIB_ENABLE_COMMAND_GAP_END_PROCEDURE
    #define BGLIB_ENABLE_COMMAND_GAP_CONNECT_SELECTIVE
    #define BGLIB_ENABLE_COMMAND_GAP_SET_FILTERING
    #define BGLIB_ENABLE_COMMAND_GAP_SET_SCAN_PARAMETERS
    #define BGLIB_ENABLE_COMMAND_GAP_SET_ADV_PARAMETERS
    #define BGLIB_ENABLE_COMMAND_GAP_SET_ADV_DATA
    #define BGLIB_ENABLE_COMMAND_GAP_SET_DIRECTED_CONNECTABLE_MODE
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_GAP
    #define BGLIB_ENABLE_EVENT_GAP_SCAN_RESPONSE
    #define BGLIB_ENABLE_EVENT_GAP_MODE_CHANGED
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_HARDWARE
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_CONFIG_IRQ
    #define BGLIB_ENABLE_COMMAND_HARDWARE_SET_SOFT_TIMER
    #define BGLIB_ENABLE_COMMAND_HARDWARE_ADC_READ
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_CONFIG_DIRECTION
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_CONFIG_FUNCTION
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_CONFIG_PULL
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_WRITE
    #define BGLIB_ENABLE_COMMAND_HARDWARE_IO_PORT_READ
    #define BGLIB_ENABLE_COMMAND_HARDWARE_SPI_CONFIG
    #define BGLIB_ENABLE_COMMAND_HARDWARE_SPI_TRANSFER
    #define BGLIB_ENABLE_COMMAND_HARDWARE_I2C_READ
    #define BGLIB_ENABLE_COMMAND_HARDWARE_I2C_WRITE
    #define BGLIB_ENABLE_COMMAND_HARDWARE_SET_TXPOWER
    #define BGLIB_ENABLE_COMMAND_HARDWARE_TIMER_COMPARATOR
#endif

#ifdef BGLIB_ENABLE_EVENT_CLASS_HARDWARE
    #define BGLIB_ENABLE_EVENT_HARDWARE_IO_PORT_STATUS
    #define BGLIB_ENABLE_EVENT_HARDWARE_SOFT_TIMER
    #define BGLIB_ENABLE_EVENT_HARDWARE_ADC_RESULT
#endif

#ifdef BGLIB_ENABLE_COMMAND_CLASS_TEST
    #define BGLIB_ENABLE_COMMAND_TEST_PHY_TX
    #define BGLIB_ENABLE_COMMAND_TEST_PHY_RX
    #define BGLIB_ENABLE_COMMAND_TEST_PHY_END
    #define BGLIB_ENABLE_COMMAND_TEST_PHY_RESET
    #define BGLIB_ENABLE_COMMAND_TEST_GET_CHANNEL_MAP
    #define BGLIB_ENABLE_COMMAND_TEST_DEBUG
#endif

#endif /* __BGLIB_CONFIG_H__ */
