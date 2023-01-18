/**
 * Autogenerated by Thrift for common.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "common_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByThriftId<::nebula::cpp2::SchemaID> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).tag_id_ref());
    case 2:
      return f(1, static_cast<T&&>(t).edge_type_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::SchemaID");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Date> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).year_ref());
    case 2:
      return f(1, static_cast<T&&>(t).month_ref());
    case 3:
      return f(2, static_cast<T&&>(t).day_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Date");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Time> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).hour_ref());
    case 2:
      return f(1, static_cast<T&&>(t).minute_ref());
    case 3:
      return f(2, static_cast<T&&>(t).sec_ref());
    case 4:
      return f(3, static_cast<T&&>(t).microsec_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Time");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::DateTime> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).year_ref());
    case 2:
      return f(1, static_cast<T&&>(t).month_ref());
    case 3:
      return f(2, static_cast<T&&>(t).day_ref());
    case 4:
      return f(3, static_cast<T&&>(t).hour_ref());
    case 5:
      return f(4, static_cast<T&&>(t).minute_ref());
    case 6:
      return f(5, static_cast<T&&>(t).sec_ref());
    case 7:
      return f(6, static_cast<T&&>(t).microsec_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::DateTime");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Value> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).nVal_ref());
    case 2:
      return f(1, static_cast<T&&>(t).bVal_ref());
    case 3:
      return f(2, static_cast<T&&>(t).iVal_ref());
    case 4:
      return f(3, static_cast<T&&>(t).fVal_ref());
    case 5:
      return f(4, static_cast<T&&>(t).sVal_ref());
    case 6:
      return f(5, static_cast<T&&>(t).dVal_ref());
    case 7:
      return f(6, static_cast<T&&>(t).tVal_ref());
    case 8:
      return f(7, static_cast<T&&>(t).dtVal_ref());
    case 9:
      return f(8, static_cast<T&&>(t).vVal_ref());
    case 10:
      return f(9, static_cast<T&&>(t).eVal_ref());
    case 11:
      return f(10, static_cast<T&&>(t).pVal_ref());
    case 12:
      return f(11, static_cast<T&&>(t).lVal_ref());
    case 13:
      return f(12, static_cast<T&&>(t).mVal_ref());
    case 14:
      return f(13, static_cast<T&&>(t).uVal_ref());
    case 15:
      return f(14, static_cast<T&&>(t).gVal_ref());
    case 16:
      return f(15, static_cast<T&&>(t).ggVal_ref());
    case 17:
      return f(16, static_cast<T&&>(t).duVal_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Value");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::NList> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).values_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::NList");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::NMap> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).kvs_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::NMap");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::NSet> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).values_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::NSet");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Row> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).values_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Row");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::DataSet> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).column_names_ref());
    case 2:
      return f(1, static_cast<T&&>(t).rows_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::DataSet");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Coordinate> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).x_ref());
    case 2:
      return f(1, static_cast<T&&>(t).y_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Coordinate");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Point> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).coord_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Point");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::LineString> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).coordList_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::LineString");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Polygon> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).coordListList_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Polygon");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Geography> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).ptVal_ref());
    case 2:
      return f(1, static_cast<T&&>(t).lsVal_ref());
    case 3:
      return f(2, static_cast<T&&>(t).pgVal_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Geography");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Tag> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    case 2:
      return f(1, static_cast<T&&>(t).props_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Tag");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Vertex> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).vid_ref());
    case 2:
      return f(1, static_cast<T&&>(t).tags_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Vertex");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Edge> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).src_ref());
    case 2:
      return f(1, static_cast<T&&>(t).dst_ref());
    case 3:
      return f(2, static_cast<T&&>(t).type_ref());
    case 4:
      return f(3, static_cast<T&&>(t).name_ref());
    case 5:
      return f(4, static_cast<T&&>(t).ranking_ref());
    case 6:
      return f(5, static_cast<T&&>(t).props_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Edge");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Step> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).dst_ref());
    case 2:
      return f(1, static_cast<T&&>(t).type_ref());
    case 3:
      return f(2, static_cast<T&&>(t).name_ref());
    case 4:
      return f(3, static_cast<T&&>(t).ranking_ref());
    case 5:
      return f(4, static_cast<T&&>(t).props_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Step");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Path> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).src_ref());
    case 2:
      return f(1, static_cast<T&&>(t).steps_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Path");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::HostAddr> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).host_ref());
    case 2:
      return f(1, static_cast<T&&>(t).port_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::HostAddr");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::KeyValue> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).key_ref());
    case 2:
      return f(1, static_cast<T&&>(t).value_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::KeyValue");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::Duration> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).seconds_ref());
    case 2:
      return f(1, static_cast<T&&>(t).microseconds_ref());
    case 3:
      return f(2, static_cast<T&&>(t).months_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::Duration");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::LogInfo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).log_id_ref());
    case 2:
      return f(1, static_cast<T&&>(t).term_id_ref());
    case 3:
      return f(2, static_cast<T&&>(t).commit_log_id_ref());
    case 4:
      return f(3, static_cast<T&&>(t).checkpoint_path_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::LogInfo");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::DirInfo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).root_ref());
    case 2:
      return f(1, static_cast<T&&>(t).data_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::DirInfo");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::CheckpointInfo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).space_id_ref());
    case 2:
      return f(1, static_cast<T&&>(t).parts_ref());
    case 3:
      return f(2, static_cast<T&&>(t).data_path_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::CheckpointInfo");
    }
  }
};

template <>
struct VisitByThriftId<::nebula::cpp2::LogEntry> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).cluster_ref());
    case 2:
      return f(1, static_cast<T&&>(t).log_str_ref());
    default:
      throwInvalidThriftId(id, "::nebula::cpp2::LogEntry");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
