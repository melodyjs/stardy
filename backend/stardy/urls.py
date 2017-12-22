from django.conf.urls import url, include
from rest_framework.routers import DefaultRouter
from .views import UserViewSet, GroupViewSet, InterestViewSet, UsersGroupViewSet, AttendenceViewSet, \
    GroupInterestViewSet, MaterialViewSet, GroupPlcViewSet

router = DefaultRouter()
router.register('user', UserViewSet)
router.register('interest', InterestViewSet)
router.register('group', GroupViewSet)
router.register('usersgroup', UsersGroupViewSet)
router.register('attendence', AttendenceViewSet)
router.register('group_interest', GroupInterestViewSet)
router.register('material', MaterialViewSet)
router.register('group_plc', GroupPlcViewSet)

urlpatterns = [
    url(r'', include(router.urls)),
]